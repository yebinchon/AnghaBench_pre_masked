
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_7__ ;
typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u32 ;
struct dvb_frontend_parametersContext {void* status; } ;
struct TYPE_22__ {void* delivery_system; } ;
struct dvb_frontend {TYPE_6__ dtv_property_cache; struct dib9000_state* demodulator_priv; } ;
struct dtv_frontend_properties {int dummy; } ;
struct TYPE_17__ {int output_mode; } ;
struct TYPE_18__ {TYPE_1__ cfg; } ;
struct TYPE_19__ {TYPE_2__ d9; } ;
struct dib9000_state {int pid_ctrl_index; int get_frontend_internal; TYPE_4__* pid_ctrl; TYPE_7__** fe; int demod_lock; TYPE_3__ chip; struct dvb_frontend_parametersContext channel_status; } ;
struct TYPE_21__ {scalar_t__ frequency; scalar_t__ bandwidth_hz; scalar_t__ transmission_mode; scalar_t__ guard_interval; scalar_t__ modulation; scalar_t__ code_rate_HP; void* delivery_system; } ;
struct TYPE_23__ {TYPE_5__ dtv_property_cache; } ;
struct TYPE_20__ {scalar_t__ cmd; int onoff; int pid; int id; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 size_t VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 void* VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_0 (TYPE_7__*,int ,int ,int ) ;
 int FUNC_1 (TYPE_7__*,int ) ;
 int FUNC_2 (TYPE_7__*,int) ;
 int FUNC_3 (TYPE_7__*,int ) ;
 int FUNC_4 (TYPE_7__*) ;
 int FUNC_5 (TYPE_7__*,TYPE_5__*) ;
 int FUNC_6 (TYPE_7__*) ;
 int FUNC_7 (TYPE_7__*,struct dvb_frontend_parametersContext*) ;
 int FUNC_8 (TYPE_7__*,int ) ;
 int FUNC_9 (char*,...) ;
 int FUNC_10 (TYPE_5__*,TYPE_6__*,int) ;
 int FUNC_11 (int) ;
 scalar_t__ FUNC_12 (int *) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static int FUNC_14(struct dvb_frontend *VAR_15)
{
 struct dib9000_state *VAR_16 = VAR_15->demodulator_priv;
 int VAR_17, VAR_18;
 u32 VAR_19;
 u8 VAR_20, VAR_21, VAR_22, VAR_23;
 struct dvb_frontend_parametersContext VAR_24;


 if (VAR_16->fe[0]->dtv_property_cache.frequency == 0) {
  FUNC_9("dib9000: must specify frequency\n");
  return 0;
 }

 if (VAR_16->fe[0]->dtv_property_cache.bandwidth_hz == 0) {
  FUNC_9("dib9000: must specify bandwidth\n");
  return 0;
 }

 VAR_16->pid_ctrl_index = -1;
 if (FUNC_12(&VAR_16->demod_lock) < 0) {
  FUNC_9("could not get the lock\n");
  return 0;
 }

 VAR_15->dtv_property_cache.delivery_system = VAR_13;


 if (VAR_16->fe[0]->dtv_property_cache.transmission_mode == VAR_14 ||
     VAR_16->fe[0]->dtv_property_cache.guard_interval == VAR_8 ||
     VAR_16->fe[0]->dtv_property_cache.modulation == VAR_12 ||
     VAR_16->fe[0]->dtv_property_cache.code_rate_HP == VAR_5) {

  VAR_16->channel_status.status = VAR_1;
 } else
  VAR_16->channel_status.status = VAR_0;


 for (VAR_22 = 0; (VAR_22 < VAR_9) && (VAR_16->fe[VAR_22] != ((void*)0)); VAR_22++) {
  FUNC_2(VAR_16->fe[VAR_22], 1);


  FUNC_10(&VAR_16->fe[VAR_22]->dtv_property_cache, &VAR_15->dtv_property_cache, sizeof(struct dtv_frontend_properties));

  VAR_16->fe[VAR_22]->dtv_property_cache.delivery_system = VAR_13;
  FUNC_3(VAR_16->fe[VAR_22], VAR_11);

  FUNC_7(VAR_16->fe[VAR_22], &VAR_16->channel_status);
  FUNC_8(VAR_16->fe[VAR_22], VAR_2);
 }


 VAR_21 = 0;
 VAR_23 = 0;
 do {
  VAR_17 = FUNC_4(VAR_16->fe[0]);
  for (VAR_22 = 1; (VAR_22 < VAR_9) && (VAR_16->fe[VAR_22] != ((void*)0)); VAR_22++) {
   VAR_18 = FUNC_4(VAR_16->fe[VAR_22]);
   if (VAR_17 == VAR_6)
    VAR_17 = VAR_18;
   else if ((VAR_18 != VAR_6) && (VAR_18 > VAR_17))
    VAR_17 = VAR_18;
  }
  if (VAR_17 != VAR_6)
   FUNC_11(VAR_17 / 10);
  else
   break;

  VAR_20 = 0;
  VAR_21 = 0;
  VAR_23 = 0;
  for (VAR_22 = 0; (VAR_22 < VAR_9) && (VAR_16->fe[VAR_22] != ((void*)0)); VAR_22++) {
   VAR_19 = -FUNC_6(VAR_16->fe[VAR_22]);
   if (VAR_19 > -VAR_7) {
    VAR_21 = 2;
    VAR_23 = VAR_22;
    break;
   }
   if (VAR_19 == -VAR_7)
    VAR_20++;
  }
  if ((VAR_21 != 2) && (VAR_20 == 0))
   VAR_21 = 1;

 } while (VAR_21 == 0);


 if (VAR_21 == 1) {
  FUNC_9("tune failed\n");
  FUNC_13(&VAR_16->demod_lock);

  VAR_16->pid_ctrl_index = -1;
  return 0;
 }

 FUNC_9("tune success on frontend%i\n", VAR_23);


 VAR_16->get_frontend_internal = 1;
 FUNC_5(VAR_16->fe[0], &VAR_16->fe[0]->dtv_property_cache);
 VAR_16->get_frontend_internal = 0;


 VAR_24.status = VAR_0;
 for (VAR_22 = 0; (VAR_22 < VAR_9) && (VAR_16->fe[VAR_22] != ((void*)0)); VAR_22++) {

  if (VAR_22 != VAR_23) {
   FUNC_7(VAR_16->fe[VAR_22], &VAR_24);
   FUNC_8(VAR_16->fe[VAR_22], VAR_2);
  }
 }
 do {
  VAR_17 = VAR_6;
  for (VAR_22 = 0; (VAR_22 < VAR_9) && (VAR_16->fe[VAR_22] != ((void*)0)); VAR_22++) {
   if (VAR_22 != VAR_23) {
    VAR_18 = FUNC_4(VAR_16->fe[VAR_22]);
    if (VAR_17 == VAR_6)
     VAR_17 = VAR_18;
    else if ((VAR_18 != VAR_6) && (VAR_18 > VAR_17))
     VAR_17 = VAR_18;
   }
  }
  if (VAR_17 != VAR_6)
   FUNC_11(VAR_17 / 10);
  else
   break;

  VAR_20 = 0;
  for (VAR_22 = 0; (VAR_22 < VAR_9) && (VAR_16->fe[VAR_22] != ((void*)0)); VAR_22++) {
   if (VAR_22 != VAR_23) {
    VAR_19 = -FUNC_6(VAR_16->fe[VAR_22]);
    if ((VAR_22 != VAR_23) && (VAR_19 == -VAR_7))
     VAR_20++;
   }
  }
 } while (VAR_20 != 0);


 FUNC_3(VAR_16->fe[0], VAR_16->chip.d9.cfg.output_mode);
 for (VAR_22 = 1; (VAR_22 < VAR_9) && (VAR_16->fe[VAR_22] != ((void*)0)); VAR_22++)
  FUNC_3(VAR_16->fe[VAR_22], VAR_10);


 FUNC_2(VAR_16->fe[VAR_22 - 1], 0);

 FUNC_13(&VAR_16->demod_lock);
 if (VAR_16->pid_ctrl_index >= 0) {
  u8 VAR_25;
  u8 VAR_26 = VAR_16->pid_ctrl_index;

  VAR_16->pid_ctrl_index = -2;
  for (VAR_25 = 0;
    VAR_25 <= VAR_26;
    VAR_25++) {
   if (VAR_16->pid_ctrl[VAR_25].cmd == VAR_4)
    FUNC_1(VAR_16->fe[0],
      VAR_16->pid_ctrl[VAR_25].onoff);
   else if (VAR_16->pid_ctrl[VAR_25].cmd == VAR_3)
    FUNC_0(VAR_16->fe[0],
      VAR_16->pid_ctrl[VAR_25].id,
      VAR_16->pid_ctrl[VAR_25].pid,
      VAR_16->pid_ctrl[VAR_25].onoff);
  }
 }

 VAR_16->pid_ctrl_index = -2;

 return 0;
}
