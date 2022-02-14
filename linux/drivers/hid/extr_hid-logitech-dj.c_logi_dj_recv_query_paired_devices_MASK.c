
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dj_report {int device_index; int report_type; int report_id; } ;
struct dj_receiver_dev {scalar_t__ type; int last_query; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct dj_report*) ;
 struct dj_report* FUNC_1 (int,int ) ;
 int FUNC_2 (struct dj_receiver_dev*) ;
 int FUNC_3 (struct dj_receiver_dev*,struct dj_report*) ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static int FUNC_4(struct dj_receiver_dev *VAR_6)
{
 struct dj_report *VAR_7;
 int VAR_8;

 VAR_6->last_query = VAR_4;

 if (VAR_6->type != VAR_5)
  return FUNC_2(VAR_6);

 VAR_7 = FUNC_1(sizeof(struct dj_report), VAR_1);
 if (!VAR_7)
  return -VAR_0;
 VAR_7->report_id = VAR_2;
 VAR_7->device_index = 0xFF;
 VAR_7->report_type = VAR_3;
 VAR_8 = FUNC_3(VAR_6, VAR_7);
 FUNC_0(VAR_7);
 return VAR_8;
}
