
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int timestamp_t ;
struct rev_info {scalar_t__ reflog_info; } ;
struct commit {int date; } ;


 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static timestamp_t FUNC_1(const struct rev_info *VAR_0,
       struct commit *VAR_1)
{
 return VAR_0->reflog_info ?
  FUNC_0(VAR_0->reflog_info) :
  VAR_1->date;
}
