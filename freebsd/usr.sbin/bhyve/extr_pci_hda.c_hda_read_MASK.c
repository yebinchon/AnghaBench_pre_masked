
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct hda_softc {int wall_clock_start; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (struct hda_softc*,scalar_t__) ;

__attribute__((used)) static uint32_t
FUNC_2(struct hda_softc *VAR_1, uint32_t VAR_2)
{
 if (VAR_2 == VAR_0)
  return (24 * (FUNC_0() - VAR_1->wall_clock_start) / 1000);


 return (FUNC_1(VAR_1, VAR_2));
}
