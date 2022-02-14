
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint32_t ;
struct ve_spc_opp {size_t freq; size_t u_volt; } ;
struct TYPE_2__ {size_t* num_opps; struct ve_spc_opp** opps; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 scalar_t__ FUNC_0 (size_t) ;
 TYPE_1__* VAR_9 ;
 struct ve_spc_opp* FUNC_1 (size_t,int,int ) ;
 size_t FUNC_2 (int ,size_t,size_t*) ;

__attribute__((used)) static int FUNC_3(uint32_t VAR_10)
{
 uint32_t VAR_11 = 0, VAR_12, VAR_13, VAR_14;
 struct ve_spc_opp *VAR_15;

 VAR_15 = FUNC_1(VAR_5, sizeof(*VAR_15), VAR_4);
 if (!VAR_15)
  return -VAR_2;

 VAR_9->opps[VAR_10] = VAR_15;

 VAR_12 = FUNC_0(VAR_10) ? VAR_0 : VAR_1;
 for (VAR_14 = 0; VAR_14 < VAR_5; VAR_14++, VAR_12 += 4, VAR_15++) {
  VAR_13 = FUNC_2(VAR_7, VAR_12, &VAR_11);
  if (!VAR_13) {
   VAR_15->freq = (VAR_11 & VAR_3) * VAR_6;
   VAR_15->u_volt = (VAR_11 >> VAR_8) * 1000;
  } else {
   break;
  }
 }
 VAR_9->num_opps[VAR_10] = VAR_14;

 return VAR_13;
}
