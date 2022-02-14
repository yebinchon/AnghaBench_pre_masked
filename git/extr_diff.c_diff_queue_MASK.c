
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct diff_queue_struct {int dummy; } ;
struct diff_filespec {int dummy; } ;
struct diff_filepair {struct diff_filespec* two; struct diff_filespec* one; } ;


 int FUNC_0 (struct diff_queue_struct*,struct diff_filepair*) ;
 struct diff_filepair* FUNC_1 (int,int) ;

struct diff_filepair *FUNC_2(struct diff_queue_struct *VAR_0,
     struct diff_filespec *VAR_1,
     struct diff_filespec *VAR_2)
{
 struct diff_filepair *VAR_3 = FUNC_1(1, sizeof(*VAR_3));
 VAR_3->one = VAR_1;
 VAR_3->two = VAR_2;
 if (VAR_0)
  FUNC_0(VAR_0, VAR_3);
 return VAR_3;
}
