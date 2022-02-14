
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u8 ;
struct TYPE_2__ {int params; void* funcindex_clientid; void* feature_index; } ;
struct hidpp_report {TYPE_1__ fap; int report_id; } ;
struct hidpp_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct hidpp_device*,struct hidpp_report*,struct hidpp_report*) ;
 int FUNC_1 (struct hidpp_report*) ;
 struct hidpp_report* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,void**,int) ;

__attribute__((used)) static int FUNC_4(struct hidpp_device *VAR_6,
 u8 VAR_7, u8 VAR_8, u8 *VAR_9, int VAR_10,
 struct hidpp_report *VAR_11)
{
 struct hidpp_report *VAR_12;
 int VAR_13;

 if (VAR_10 > sizeof(VAR_12->fap.params))
  return -VAR_0;

 VAR_12 = FUNC_2(sizeof(struct hidpp_report), VAR_2);
 if (!VAR_12)
  return -VAR_1;

 if (VAR_10 > (VAR_3 - 4))
  VAR_12->report_id = VAR_5;
 else
  VAR_12->report_id = VAR_4;
 VAR_12->fap.feature_index = VAR_7;
 VAR_12->fap.funcindex_clientid = VAR_8;
 FUNC_3(&VAR_12->fap.params, VAR_9, VAR_10);

 VAR_13 = FUNC_0(VAR_6, VAR_12, VAR_11);
 FUNC_1(VAR_12);
 return VAR_13;
}
