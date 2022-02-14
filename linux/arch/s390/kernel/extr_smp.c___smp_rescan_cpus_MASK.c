
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct sclp_core_info {int combined; int configured; TYPE_1__* core; } ;
struct pcpu {int address; int state; } ;
typedef int cpumask_t ;
struct TYPE_4__ {scalar_t__ has_core_type; } ;
struct TYPE_3__ {scalar_t__ type; int core_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (int *,int ,int ) ;
 int VAR_6 ;
 struct pcpu* VAR_7 ;
 scalar_t__ FUNC_3 (int ,int) ;
 TYPE_2__ VAR_8 ;
 int FUNC_4 (int,int) ;
 scalar_t__ FUNC_5 (int) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_6 (int,int ) ;

__attribute__((used)) static int FUNC_7(struct sclp_core_info *VAR_11, int VAR_12)
{
 struct pcpu *VAR_13;
 cpumask_t VAR_14;
 int VAR_15, VAR_16, VAR_17, VAR_18;
 u16 VAR_19;

 VAR_16 = 0;
 FUNC_2(&VAR_14, VAR_4, VAR_5);
 VAR_15 = FUNC_0(&VAR_14);
 for (VAR_17 = 0; (VAR_17 < VAR_11->combined) && (VAR_15 < VAR_6); VAR_17++) {
  if (VAR_8.has_core_type && VAR_11->core[VAR_17].type != VAR_3)
   continue;
  VAR_19 = VAR_11->core[VAR_17].core_id << VAR_9;
  for (VAR_18 = 0; VAR_18 <= VAR_10; VAR_18++) {
   if (FUNC_3(VAR_5, VAR_19 + VAR_18))
    continue;
   VAR_13 = VAR_7 + VAR_15;
   VAR_13->address = VAR_19 + VAR_18;
   VAR_13->state =
    (VAR_15 >= VAR_11->configured*(VAR_10 + 1)) ?
    VAR_1 : VAR_0;
   FUNC_6(VAR_15, VAR_2);
   FUNC_4(VAR_15, 1);
   if (VAR_12 && FUNC_5(VAR_15) != 0)
    FUNC_4(VAR_15, 0);
   else
    VAR_16++;
   VAR_15 = FUNC_1(VAR_15, &VAR_14);
   if (VAR_15 >= VAR_6)
    break;
  }
 }
 return VAR_16;
}
