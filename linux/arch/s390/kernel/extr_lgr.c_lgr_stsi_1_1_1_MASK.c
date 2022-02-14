
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysinfo_1_1_1 {int plant; int sequence; int model; int type; int manufacturer; } ;
struct lgr_info {int plant; int sequence; int model; int type; int manufacturer; } ;


 int FUNC_0 (int ,int ,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (struct sysinfo_1_1_1*,int,int,int) ;

__attribute__((used)) static void FUNC_2(struct lgr_info *VAR_1)
{
 struct sysinfo_1_1_1 *VAR_2 = (void *) VAR_0;

 if (FUNC_1(VAR_2, 1, 1, 1))
  return;
 FUNC_0(VAR_1->manufacturer, VAR_2->manufacturer,
  sizeof(VAR_2->manufacturer));
 FUNC_0(VAR_1->type, VAR_2->type, sizeof(VAR_2->type));
 FUNC_0(VAR_1->model, VAR_2->model, sizeof(VAR_2->model));
 FUNC_0(VAR_1->sequence, VAR_2->sequence, sizeof(VAR_2->sequence));
 FUNC_0(VAR_1->plant, VAR_2->plant, sizeof(VAR_2->plant));
}
