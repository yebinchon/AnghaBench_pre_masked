
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct diff_rename_src {unsigned short score; struct diff_filepair* p; } ;
struct diff_filespec {int path; } ;
struct diff_filepair {unsigned short score; struct diff_filespec* one; } ;


 int FUNC_0 (struct diff_rename_src*,int,int ) ;
 int FUNC_1 (struct diff_rename_src*,struct diff_rename_src*,int) ;
 struct diff_rename_src* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static struct diff_rename_src *FUNC_3(struct diff_filepair *VAR_3)
{
 int VAR_4, VAR_5;
 struct diff_filespec *VAR_6 = VAR_3->one;
 unsigned short VAR_7 = VAR_3->score;

 VAR_4 = 0;
 VAR_5 = VAR_2;
 while (VAR_5 > VAR_4) {
  int VAR_8 = VAR_4 + ((VAR_5 - VAR_4) >> 1);
  struct diff_rename_src *VAR_9 = &(VAR_0[VAR_8]);
  int VAR_10 = FUNC_2(VAR_6->path, VAR_9->p->one->path);
  if (!VAR_10)
   return VAR_9;
  if (VAR_10 < 0) {
   VAR_5 = VAR_8;
   continue;
  }
  VAR_4 = VAR_8+1;
 }


 FUNC_0(VAR_0, VAR_2 + 1, VAR_1);
 VAR_2++;
 if (VAR_4 < VAR_2)
  FUNC_1(VAR_0 + VAR_4 + 1, VAR_0 + VAR_4,
      VAR_2 - VAR_4 - 1);
 VAR_0[VAR_4].p = VAR_3;
 VAR_0[VAR_4].score = VAR_7;
 return &(VAR_0[VAR_4]);
}
