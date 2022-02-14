
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timecounter {int tc_quality; struct ct_softc* tc_priv; int tc_name; int tc_frequency; int tc_counter_mask; int tc_get_timecount; } ;
struct ct_softc {scalar_t__ sc_offset; int sc_handle; int sc_tag; } ;
typedef int bus_space_tag_t ;
typedef int bus_space_handle_t ;
typedef scalar_t__ bus_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,int ,scalar_t__,int ) ;
 int VAR_9 ;
 void* FUNC_1 (int,int ,int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char const*,int ) ;
 int FUNC_4 (struct timecounter*) ;

void
FUNC_5(const char *VAR_10, bus_space_tag_t VAR_11,
    bus_space_handle_t VAR_12, bus_addr_t VAR_13)
{
 struct timecounter *VAR_14;
 struct ct_softc *VAR_15;

 FUNC_2("initializing counter-timer\n");





 FUNC_0(VAR_11, VAR_12, VAR_13 + VAR_3 + VAR_5,
     VAR_1);
 FUNC_0(VAR_11, VAR_12, VAR_13 + VAR_4 + VAR_5,
     VAR_1);

 VAR_14 = FUNC_1(sizeof(*VAR_14), VAR_6, VAR_7 | VAR_8);
 VAR_15 = FUNC_1(sizeof(*VAR_15), VAR_6, VAR_7);
 VAR_15->sc_tag = VAR_11;
 VAR_15->sc_handle = VAR_12;
 VAR_15->sc_offset = VAR_13 + VAR_3;
 VAR_14->tc_get_timecount = VAR_9;
 VAR_14->tc_counter_mask = VAR_1;
 VAR_14->tc_frequency = VAR_0;
 VAR_14->tc_name = FUNC_3(VAR_10, VAR_6);
 VAR_14->tc_priv = VAR_15;
 VAR_14->tc_quality = VAR_2;
 FUNC_4(VAR_14);
}
