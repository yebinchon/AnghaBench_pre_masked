
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_event_attr {int bp_len; int bp_type; int disabled; } ;


 int FUNC_0 (int,int,int*,int*) ;

__attribute__((used)) static int FUNC_1(struct perf_event_attr *VAR_0,
     int VAR_1, int VAR_2, bool VAR_3)
{
 int VAR_4, VAR_5, VAR_6;

 VAR_4 = FUNC_0(VAR_1, VAR_2, &VAR_5, &VAR_6);
 if (!VAR_4) {
  VAR_0->bp_len = VAR_5;
  VAR_0->bp_type = VAR_6;
  VAR_0->disabled = VAR_3;
 }

 return VAR_4;
}
