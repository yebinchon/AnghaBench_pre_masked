
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct komeda_pipeline {int ctrlr; int improc; int compiz; int id; } ;
struct komeda_data_flow_cfg {int dummy; } ;
struct komeda_crtc_state {int active_pipes; } ;
struct komeda_crtc {struct komeda_pipeline* slave; struct komeda_pipeline* master; } ;
typedef int s_dflow ;
typedef int m_dflow ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,struct komeda_crtc_state*,struct komeda_data_flow_cfg*) ;
 int FUNC_2 (int ,struct komeda_crtc_state*,struct komeda_data_flow_cfg*) ;
 int FUNC_3 (int ,struct komeda_crtc_state*,struct komeda_data_flow_cfg*) ;
 int FUNC_4 (int ,struct komeda_crtc_state*,struct komeda_data_flow_cfg*) ;
 int FUNC_5 (struct komeda_data_flow_cfg*,int ,int) ;

int FUNC_6(struct komeda_crtc *VAR_0,
       struct komeda_crtc_state *VAR_1)
{
 struct komeda_pipeline *VAR_2 = VAR_0->master;
 struct komeda_pipeline *VAR_3 = VAR_0->slave;
 struct komeda_data_flow_cfg VAR_4;
 struct komeda_data_flow_cfg VAR_5;
 int VAR_6;

 FUNC_5(&VAR_4, 0, sizeof(VAR_4));
 FUNC_5(&VAR_5, 0, sizeof(VAR_5));

 if (VAR_3 && FUNC_0(VAR_3->id, VAR_1->active_pipes)) {
  VAR_6 = FUNC_2(VAR_3->compiz, VAR_1, &VAR_5);
  if (VAR_6)
   return VAR_6;


  VAR_6 = FUNC_1(VAR_2->compiz, VAR_1,
           &VAR_5);
  if (VAR_6)
   return VAR_6;
 }

 VAR_6 = FUNC_2(VAR_2->compiz, VAR_1, &VAR_4);
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_3(VAR_2->improc, VAR_1, &VAR_4);
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_4(VAR_2->ctrlr, VAR_1, &VAR_4);
 if (VAR_6)
  return VAR_6;

 return 0;
}
