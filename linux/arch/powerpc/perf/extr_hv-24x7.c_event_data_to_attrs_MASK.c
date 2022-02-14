
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hv_24x7_event_data {int domain; } ;
struct attribute {int dummy; } ;


 struct attribute* FUNC_0 (unsigned int,struct hv_24x7_event_data*,int ,int) ;

__attribute__((used)) static int FUNC_1(unsigned VAR_0, struct attribute **VAR_1,
       struct hv_24x7_event_data *VAR_2, int VAR_3)
{
 *VAR_1 = FUNC_0(VAR_0, VAR_2, VAR_2->domain, VAR_3);
 if (!*VAR_1)
  return -1;

 return 0;
}
