
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct fs {int fs_contigsumsize; int* fs_maxcluster; } ;
struct cg {int cg_cgx; int cg_nclusterblks; } ;
typedef int int32_t ;


 int VAR_0 ;
 int FUNC_0 (struct fs*) ;
 int * FUNC_1 (struct cg*,int const) ;
 int* FUNC_2 (struct cg*,int const) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int,int,int const) ;
 size_t FUNC_6 (int ,int const) ;

void
FUNC_7(struct fs *VAR_1, struct cg *VAR_2, int32_t VAR_3, int VAR_4)
{
 int32_t *VAR_5;
 int32_t *VAR_6;
 u_char *VAR_7, *VAR_8;
 int VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15;
 const int VAR_16 = FUNC_0(VAR_1);

 if (VAR_1->fs_contigsumsize <= 0)
  return;
 VAR_7 = FUNC_1(VAR_2, VAR_16);
 VAR_5 = FUNC_2(VAR_2, VAR_16);



 if (VAR_4 > 0)
  FUNC_4(VAR_7, VAR_3);
 else
  FUNC_3(VAR_7, VAR_3);



 VAR_10 = VAR_3 + 1;
 VAR_11 = VAR_10 + VAR_1->fs_contigsumsize;
 if ((unsigned)VAR_11 >= FUNC_6(VAR_2->cg_nclusterblks, VAR_16))
  VAR_11 = FUNC_6(VAR_2->cg_nclusterblks, VAR_16);
 VAR_8 = &VAR_7[VAR_10 / VAR_0];
 VAR_14 = *VAR_8++;
 VAR_15 = 1 << (VAR_10 % VAR_0);
 for (VAR_9 = VAR_10; VAR_9 < VAR_11; VAR_9++) {
  if ((VAR_14 & VAR_15) == 0)
   break;
  if ((VAR_9 & (VAR_0 - 1)) != (VAR_0 - 1)) {
   VAR_15 <<= 1;
  } else {
   VAR_14 = *VAR_8++;
   VAR_15 = 1;
  }
 }
 VAR_12 = VAR_9 - VAR_10;



 VAR_10 = VAR_3 - 1;
 VAR_11 = VAR_10 - VAR_1->fs_contigsumsize;
 if (VAR_11 < 0)
  VAR_11 = -1;
 VAR_8 = &VAR_7[VAR_10 / VAR_0];
 VAR_14 = *VAR_8--;
 VAR_15 = 1 << (VAR_10 % VAR_0);
 for (VAR_9 = VAR_10; VAR_9 > VAR_11; VAR_9--) {
  if ((VAR_14 & VAR_15) == 0)
   break;
  if ((VAR_9 & (VAR_0 - 1)) != 0) {
   VAR_15 >>= 1;
  } else {
   VAR_14 = *VAR_8--;
   VAR_15 = 1 << (VAR_0 - 1);
  }
 }
 VAR_13 = VAR_10 - VAR_9;




 VAR_9 = VAR_13 + VAR_12 + 1;
 if (VAR_9 > VAR_1->fs_contigsumsize)
  VAR_9 = VAR_1->fs_contigsumsize;
 FUNC_5(VAR_5[VAR_9], VAR_4, VAR_16);
 if (VAR_13 > 0)
  FUNC_5(VAR_5[VAR_13], -VAR_4, VAR_16);
 if (VAR_12 > 0)
  FUNC_5(VAR_5[VAR_12], -VAR_4, VAR_16);




 VAR_6 = &VAR_5[VAR_1->fs_contigsumsize];
 for (VAR_9 = VAR_1->fs_contigsumsize; VAR_9 > 0; VAR_9--)
  if (FUNC_6(*VAR_6--, VAR_16) > 0)
   break;
 VAR_1->fs_maxcluster[FUNC_6(VAR_2->cg_cgx, VAR_16)] = VAR_9;
}
