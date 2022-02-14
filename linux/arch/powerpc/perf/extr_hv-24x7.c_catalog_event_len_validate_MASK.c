
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hv_24x7_event_data {int length; } ;
typedef int ssize_t ;
typedef int __u8 ;


 int FUNC_0 (int ) ;
 void* FUNC_1 (struct hv_24x7_event_data*,void*) ;
 int FUNC_2 (struct hv_24x7_event_data*,void*) ;
 int FUNC_3 (char*,size_t) ;
 int FUNC_4 (char*,size_t,int,struct hv_24x7_event_data*) ;
 int FUNC_5 (char*,size_t,...) ;

__attribute__((used)) static ssize_t FUNC_6(struct hv_24x7_event_data *VAR_0,
       size_t VAR_1,
       size_t VAR_2,
       size_t VAR_3,
       size_t VAR_4, void *VAR_5)
{
 ssize_t VAR_6;
 void *VAR_7, *VAR_8;

 if (VAR_4 >= VAR_2)
  return -1;

 if (VAR_1 >= VAR_3) {
  FUNC_3("catalog event data has %zu bytes of padding after last event\n",
    VAR_2 - VAR_4);
  return -1;
 }

 if (!FUNC_2(VAR_0, VAR_5)) {
  FUNC_5("event %zu fixed portion is not within range\n",
    VAR_1);
  return -1;
 }

 VAR_6 = FUNC_0(VAR_0->length);

 if (VAR_6 % 16)
  FUNC_4("event %zu has length %zu not divisible by 16: event=%pK\n",
    VAR_1, VAR_6, VAR_0);

 VAR_7 = (__u8 *)VAR_0 + VAR_6;
 if (VAR_7 > VAR_5) {
  FUNC_5("event %zu has .length=%zu, ends after buffer end: ev_end=%pK > end=%pK, offset=%zu\n",
    VAR_1, VAR_6, VAR_7, VAR_5,
    VAR_4);
  return -1;
 }

 VAR_8 = FUNC_1(VAR_0, VAR_5);
 if (!VAR_8) {
  FUNC_5("event %zu has a calculated length which exceeds buffer length %zu: event=%pK end=%pK, offset=%zu\n",
   VAR_1, VAR_2, VAR_0, VAR_5,
   VAR_4);
  return -1;
 }

 if (VAR_8 > VAR_7) {
  FUNC_5("event %zu exceeds it's own length: event=%pK, end=%pK, offset=%zu, calc_ev_end=%pK\n",
   VAR_1, VAR_0, VAR_7, VAR_4, VAR_8);
  return -1;
 }

 return VAR_6;
}
