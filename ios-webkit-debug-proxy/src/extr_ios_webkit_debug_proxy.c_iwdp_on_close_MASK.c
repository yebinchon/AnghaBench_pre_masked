
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef TYPE_1__* iwdp_type_t ;
typedef TYPE_2__* iwdp_t ;
typedef int iwdp_status ;
typedef int iwdp_iws_t ;
typedef int iwdp_iwi_t ;
typedef int iwdp_iport_t ;
typedef int iwdp_ifs_t ;
typedef int iwdp_idl_t ;
struct TYPE_11__ {int (* on_error ) (TYPE_2__*,char*,int) ;} ;
struct TYPE_10__ {int type; } ;







 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (TYPE_2__*,int ) ;
 int FUNC_4 (TYPE_2__*,int ) ;
 int FUNC_5 (TYPE_2__*,char*,int) ;

iwdp_status FUNC_6(iwdp_t VAR_0, int VAR_1, void *VAR_2, bool VAR_3) {
  int VAR_4 = ((iwdp_type_t)VAR_2)->type;
  switch (VAR_4) {
    case 132:
      return FUNC_0(VAR_0, (iwdp_idl_t)VAR_2);
    case 130:
      return FUNC_2(VAR_0, (iwdp_iport_t)VAR_2);
    case 129:
      return FUNC_3(VAR_0, (iwdp_iwi_t)VAR_2);
    case 128:
      return FUNC_4(VAR_0, (iwdp_iws_t)VAR_2);
    case 131:
      return FUNC_1(VAR_0, (iwdp_ifs_t)VAR_2);
    default:
      return VAR_0->on_error(VAR_0, "Unknown close type %d", VAR_4);
  }
}
