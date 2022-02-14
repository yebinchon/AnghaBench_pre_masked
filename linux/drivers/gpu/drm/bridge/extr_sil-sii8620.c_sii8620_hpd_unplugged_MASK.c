
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sii8620 {int sink_detected; int feature_complete; int * edid; int sink_type; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct sii8620*) ;

__attribute__((used)) static void FUNC_2(struct sii8620 *VAR_1)
{
 FUNC_1(VAR_1);
 VAR_1->sink_type = VAR_0;
 VAR_1->sink_detected = 0;
 VAR_1->feature_complete = 0;
 FUNC_0(VAR_1->edid);
 VAR_1->edid = ((void*)0);
}
