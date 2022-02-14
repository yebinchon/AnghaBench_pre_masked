
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
typedef int u_char ;
struct fs {size_t fs_frag; int fs_fpg; } ;
struct cg {int cg_frotor; int cg_freeoff; } ;
typedef int int32_t ;
typedef scalar_t__ daddr_t ;


 int VAR_0 ;
 int FUNC_0 (struct fs*) ;
 int* VAR_1 ;
 int FUNC_1 (struct fs*,int *,int) ;
 int * FUNC_2 (struct cg*,int const) ;
 int FUNC_3 (struct fs*,scalar_t__) ;
 int FUNC_4 (int,char*,long long,...) ;
 scalar_t__* VAR_2 ;
 int FUNC_5 (int ,int) ;
 int* VAR_3 ;
 int FUNC_6 (int ,int const*,int const*,int) ;
 int FUNC_7 (int,int const) ;

__attribute__((used)) static int32_t
FUNC_8(struct fs *VAR_4, struct cg *VAR_5, daddr_t VAR_6, int VAR_7)
{
 int32_t VAR_8;
 int VAR_9, VAR_10, VAR_11, VAR_12;
 int VAR_13, VAR_14, VAR_15, VAR_16;
 int VAR_17, VAR_18;
 const int VAR_19 = FUNC_0(VAR_4);





 if (VAR_6)
  VAR_9 = FUNC_3(VAR_4, VAR_6) / VAR_0;
 else
  VAR_9 = FUNC_7(VAR_5->cg_frotor, VAR_19) / VAR_0;
 VAR_10 = FUNC_5(VAR_4->fs_fpg, VAR_0) - VAR_9;
 VAR_17 = VAR_9;
 VAR_18 = VAR_10;
 VAR_11 = FUNC_6((u_int)VAR_10,
  (const u_char *)&FUNC_2(VAR_5, VAR_19)[VAR_9],
  (const u_char *)VAR_2[VAR_4->fs_frag],
  (1 << (VAR_7 - 1 + (VAR_4->fs_frag % VAR_0))));
 if (VAR_11 == 0) {
  VAR_10 = VAR_9 + 1;
  VAR_9 = 0;
  VAR_11 = FUNC_6((u_int)VAR_10,
   (const u_char *)&FUNC_2(VAR_5, VAR_19)[0],
   (const u_char *)VAR_2[VAR_4->fs_frag],
   (1 << (VAR_7 - 1 + (VAR_4->fs_frag % VAR_0))));
  if (VAR_11 == 0) {
   FUNC_4(1,
    "ffs_alloccg: map corrupted: start %d len %d offset %d %ld",
    VAR_17, VAR_18,
    FUNC_7(VAR_5->cg_freeoff, VAR_19),
    (long)FUNC_2(VAR_5, VAR_19) - (long)VAR_5);

  }
 }
 VAR_8 = (VAR_9 + VAR_10 - VAR_11) * VAR_0;
 VAR_5->cg_frotor = FUNC_7(VAR_8, VAR_19);




 for (VAR_12 = VAR_8 + VAR_0; VAR_8 < VAR_12; VAR_8 += VAR_4->fs_frag) {
  VAR_13 = FUNC_1(VAR_4, FUNC_2(VAR_5, VAR_19), VAR_8);
  VAR_13 <<= 1;
  VAR_14 = VAR_1[VAR_7];
  VAR_15 = VAR_3[VAR_7];
  for (VAR_16 = 0; VAR_16 <= VAR_4->fs_frag - VAR_7; VAR_16++) {
   if ((VAR_13 & VAR_14) == VAR_15)
    return (VAR_8 + VAR_16);
   VAR_14 <<= 1;
   VAR_15 <<= 1;
  }
 }
 FUNC_4(1, "ffs_alloccg: block not in map: bno %lld", (long long)VAR_8);
 return (-1);
}
