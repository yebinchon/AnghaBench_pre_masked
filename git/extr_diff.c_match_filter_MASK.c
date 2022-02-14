
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct diff_options {int dummy; } ;
struct diff_filepair {scalar_t__ status; scalar_t__ score; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__,struct diff_options const*) ;

__attribute__((used)) static int FUNC_1(const struct diff_options *VAR_2, const struct diff_filepair *VAR_3)
{
 return (((VAR_3->status == VAR_1) &&
   ((VAR_3->score &&
     FUNC_0(VAR_0, VAR_2)) ||
    (!VAR_3->score &&
     FUNC_0(VAR_1, VAR_2)))) ||
  ((VAR_3->status != VAR_1) &&
   FUNC_0(VAR_3->status, VAR_2)));
}
