
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union dinode {int dummy; } dinode ;
struct fs {int fs_bsize; } ;
typedef int off_t ;


 int FUNC_0 (struct fs*,union dinode*,int ) ;
 int FUNC_1 (struct fs*) ;
 int VAR_0 ;
 int FUNC_2 (struct fs*,int) ;
 int VAR_1 ;
 int FUNC_3 (struct fs*,int) ;
 int FUNC_4 (struct fs*,int) ;

__attribute__((used)) static int FUNC_5(struct fs *VAR_2, union dinode *VAR_3)
{
 off_t VAR_4, VAR_5;

 VAR_5 = FUNC_0(VAR_2, VAR_3, VAR_1);
 if (FUNC_4(VAR_2,VAR_5) >= VAR_0) {
  VAR_4 = FUNC_2(VAR_2,VAR_5);
  VAR_5 = FUNC_4(VAR_2,VAR_4);
  VAR_5 = (VAR_5 - VAR_0 + FUNC_1(VAR_2) - 1) / FUNC_1(VAR_2);
  while (VAR_5 > 0) {
   VAR_4 += VAR_5 * VAR_2->fs_bsize;

   VAR_5 = (VAR_5 - 1 + FUNC_1(VAR_2) - 1) / FUNC_1(VAR_2);
  }
 } else
  VAR_4 = FUNC_3(VAR_2,VAR_5);

 return VAR_4 / 512;

}
