
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct name_resp {int name; } ;
struct attr_resp {int * attr; } ;
struct TYPE_2__ {int clk_id; int num_parents; int parent; int num_nodes; int node; int clk_name; scalar_t__ type; scalar_t__ valid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int) ;
 int VAR_8 ;
 int VAR_9 ;
 TYPE_1__* VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int,int ,int *) ;
 int FUNC_5 (int,int ,int *) ;
 int FUNC_6 (int,scalar_t__*) ;
 int FUNC_7 (int,struct attr_resp*) ;
 int FUNC_8 (int,struct name_resp*) ;

__attribute__((used)) static void FUNC_9(void)
{
 int VAR_12, VAR_13;
 u32 VAR_14 = 0;
 u32 VAR_15, VAR_16, VAR_17;
 struct attr_resp VAR_18;
 struct name_resp VAR_19;

 for (VAR_12 = 0; VAR_12 < VAR_11; VAR_12++) {
  VAR_13 = FUNC_7(VAR_12, &VAR_18);
  if (VAR_13)
   continue;

  VAR_10[VAR_12].valid = FUNC_0(VAR_5, VAR_18.attr[0]);
  VAR_10[VAR_12].type = FUNC_0(VAR_4, VAR_18.attr[0]) ?
   VAR_6 : VAR_7;

  VAR_15 = FUNC_0(VAR_3, VAR_18.attr[0]);
  VAR_16 = FUNC_0(VAR_2, VAR_18.attr[0]);
  VAR_17 = FUNC_0(VAR_0, VAR_18.attr[0]);

  VAR_10[VAR_12].clk_id = FUNC_1(VAR_0, VAR_17) |
      FUNC_1(VAR_2, VAR_16) |
      FUNC_1(VAR_3, VAR_15) |
      FUNC_1(VAR_1, VAR_12);

  FUNC_8(VAR_10[VAR_12].clk_id, &VAR_19);
  if (!FUNC_2(VAR_19.name, VAR_9))
   continue;
  FUNC_3(VAR_10[VAR_12].clk_name, VAR_19.name, VAR_8);
 }


 for (VAR_12 = 0; VAR_12 < VAR_11; VAR_12++) {
  VAR_13 = FUNC_6(VAR_12, &VAR_14);
  if (VAR_13 || VAR_14 != VAR_7)
   continue;

  VAR_13 = FUNC_5(VAR_12, VAR_10[VAR_12].node,
      &VAR_10[VAR_12].num_nodes);
  if (VAR_13)
   continue;

  VAR_13 = FUNC_4(VAR_12, VAR_10[VAR_12].parent,
            &VAR_10[VAR_12].num_parents);
  if (VAR_13)
   continue;
 }
}
