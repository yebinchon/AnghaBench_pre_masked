
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct dpp {int dummy; } ;
struct dcn10_dpp {int dummy; } ;
struct TYPE_2__ {int * blue; int * green; int * red; } ;
struct dc_gamma {int num_entries; TYPE_1__ entries; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int ,int ,int *) ;
 int FUNC_1 (int ,int ,int ,int) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ,int,int ,int,int ,int) ;
 int VAR_13 ;
 struct dcn10_dpp* FUNC_4 (struct dpp*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct dpp*) ;
 int FUNC_7 (struct dpp*,int*) ;

void FUNC_8(
  struct dpp *VAR_14,
  const struct dc_gamma *VAR_15)
{
 int VAR_16;
 struct dcn10_dpp *VAR_17 = FUNC_4(VAR_14);
 bool VAR_18 = 0;
 uint32_t VAR_19;

 FUNC_1(VAR_12, 0, VAR_13, 1);
 FUNC_6(VAR_14);

 FUNC_7(VAR_14, &VAR_18);
 if (!VAR_18)
  FUNC_2(VAR_6, VAR_9, 0);
 else
  FUNC_2(VAR_6, VAR_9, 1);

 FUNC_2(VAR_6, VAR_8, 0);

 FUNC_2(VAR_0, VAR_1, 0);

 FUNC_2(VAR_6, VAR_11, 7);

 FUNC_3(
  VAR_0,
  VAR_4, 3,
  VAR_3, 3,
  VAR_2, 3);

 FUNC_2(VAR_7, VAR_7, 0);
 for (VAR_16 = 0; VAR_16 < VAR_15->num_entries; VAR_16++) {
  FUNC_1(VAR_10, 0, VAR_10,
    FUNC_5(
     VAR_15->entries.red[VAR_16]));
  FUNC_1(VAR_10, 0, VAR_10,
    FUNC_5(
     VAR_15->entries.green[VAR_16]));
  FUNC_1(VAR_10, 0, VAR_10,
    FUNC_5(
     VAR_15->entries.blue[VAR_16]));
 }

 FUNC_1(VAR_12, 0, VAR_13, 0);

 FUNC_2(VAR_0, VAR_5, VAR_18 ? 3 : 2);
 FUNC_0(VAR_0, VAR_5, &VAR_19);
}
