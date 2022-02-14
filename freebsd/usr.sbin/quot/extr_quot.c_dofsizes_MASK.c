
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union dinode {int dummy; } dinode ;
struct fsizes {int* fsz_sz; int fsz_last; int fsz_first; scalar_t__* fsz_count; struct fsizes* fsz_next; } ;
struct fs {int fs_ncg; int fs_ipg; } ;
typedef int intmax_t ;
typedef int ino_t ;
typedef int daddr_t ;


 int FUNC_0 (struct fs*,union dinode*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct fs*,union dinode*) ;
 int VAR_4 ;
 int FUNC_3 (int,char*,char*) ;
 scalar_t__ VAR_5 ;
 int FUNC_4 (int,char*) ;
 scalar_t__ VAR_6 ;
 struct fsizes* VAR_7 ;
 union dinode* FUNC_5 (int,struct fs*,int) ;
 int FUNC_6 (struct fs*,union dinode*) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (char*,int ,int ,int) ;
 int FUNC_9 (int,int) ;
 int FUNC_10 (struct fs*,union dinode*) ;

__attribute__((used)) static void
FUNC_11(int VAR_8, struct fs *VAR_9, char *VAR_10)
{
 ino_t VAR_11, VAR_12;
 union dinode *VAR_13;
 daddr_t VAR_14, VAR_15;
 struct fsizes *VAR_16, **VAR_17;
 int VAR_18;

 VAR_12 = VAR_9->fs_ncg * VAR_9->fs_ipg - 1;




 for (VAR_11 = 0; VAR_11 < VAR_12; VAR_11++) {
  VAR_5 = 0;
  if ((VAR_13 = FUNC_5(VAR_8,VAR_9,VAR_11))




      && !FUNC_6(VAR_9, VAR_13)

      ) {
   VAR_14 = VAR_6 ? FUNC_10(VAR_9, VAR_13) :
       FUNC_2(VAR_9, VAR_13);
   VAR_15 = FUNC_1(VAR_14);
   for (VAR_17 = &VAR_7; (VAR_16 = *VAR_17); VAR_17 = &VAR_16->fsz_next) {
    if (VAR_15 < VAR_16->fsz_last)
     break;
   }
   if (!VAR_16 || VAR_15 < VAR_16->fsz_first) {
    if (!(VAR_16 = (struct fsizes *)
        FUNC_7(sizeof(struct fsizes))))
     FUNC_4(1, "allocate fsize structure");
    VAR_16->fsz_next = *VAR_17;
    *VAR_17 = VAR_16;
    VAR_16->fsz_first = FUNC_9(VAR_15, VAR_0);
    VAR_16->fsz_last = VAR_16->fsz_first + VAR_0;
    for (VAR_18 = VAR_0; --VAR_18 >= 0;) {
     VAR_16->fsz_count[VAR_18] = 0;
     VAR_16->fsz_sz[VAR_18] = 0;
    }
   }
   VAR_16->fsz_count[VAR_15 % VAR_0]++;
   VAR_16->fsz_sz[VAR_15 % VAR_0] += VAR_14;

  } else if (VAR_5) {
   FUNC_3(1, "%s", VAR_10);
  }
 }
 VAR_14 = 0;
 for (VAR_16 = VAR_7; VAR_16; VAR_16 = VAR_16->fsz_next) {
  for (VAR_18 = 0; VAR_18 < VAR_0; VAR_18++) {
   if (VAR_16->fsz_count[VAR_18])
    FUNC_8("%jd\t%jd\t%d\n",
        (intmax_t)(VAR_16->fsz_first + VAR_18),
        (intmax_t)VAR_16->fsz_count[VAR_18],
        FUNC_1(VAR_14 += VAR_16->fsz_sz[VAR_18]));
  }
 }
}
