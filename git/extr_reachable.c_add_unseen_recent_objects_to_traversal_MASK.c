
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int timestamp_t ;
struct rev_info {int dummy; } ;
struct recent_data {int timestamp; struct rev_info* revs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,struct recent_data*,int ) ;
 int FUNC_1 (int ,struct recent_data*,int ) ;

int FUNC_2(struct rev_info *VAR_3,
        timestamp_t VAR_4)
{
 struct recent_data VAR_5;
 int VAR_6;

 VAR_5.revs = VAR_3;
 VAR_5.timestamp = VAR_4;

 VAR_6 = FUNC_0(VAR_1, &VAR_5,
      VAR_0);
 if (VAR_6)
  return VAR_6;
 return FUNC_1(VAR_2, &VAR_5,
          VAR_0);
}
