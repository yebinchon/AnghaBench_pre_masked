
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct madeye_port {void* gsi_agent; void* smi_agent; } ;
struct ib_device {scalar_t__ node_type; int phys_port_cnt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 void* FUNC_0 (struct ib_device*,int,int ,int,int ,int ,struct madeye_port*) ;
 int FUNC_1 (struct ib_device*,int *,struct madeye_port*) ;
 struct madeye_port* FUNC_2 (int,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static void FUNC_3(struct ib_device *VAR_11)
{
 struct madeye_port *VAR_12;
 int VAR_13;
 u8 VAR_14, VAR_15, VAR_16;

 if (VAR_11->node_type == VAR_5) {
  VAR_15 = 0;
  VAR_16 = 0;
 } else {
  VAR_15 = 1;
  VAR_16 = VAR_11->phys_port_cnt;
 }

 VAR_12 = FUNC_2(sizeof *VAR_12 * (VAR_16 - VAR_15 + 1), VAR_0);
 if (!VAR_12)
  goto out;

 VAR_13 = VAR_2 | VAR_1;
 for (VAR_14 = 0; VAR_14 <= VAR_16 - VAR_15; VAR_14++) {
  VAR_12[VAR_14].smi_agent = FUNC_0(VAR_11, VAR_14 + VAR_15,
         VAR_4,
         VAR_13,
         VAR_10,
         VAR_8,
         &VAR_12[VAR_14]);
  VAR_12[VAR_14].gsi_agent = FUNC_0(VAR_11, VAR_14 + VAR_15,
         VAR_3,
         VAR_13,
         VAR_9,
         VAR_7,
         &VAR_12[VAR_14]);
 }

out:
 FUNC_1(VAR_11, &VAR_6, VAR_12);
}
