
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef long uLong ;
typedef scalar_t__ time_t ;
struct jcg_header {void* jh_hcrc; void* jh_dcrc; void* jh_minor; void* jh_major; void* jh_time; void* jh_type; void* jh_magic; } ;


 long VAR_0 ;
 void* VAR_1 ;
 long FUNC_0 (long,void*,int) ;
 int FUNC_1 (int,char*,...) ;
 void* FUNC_2 (long) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (struct jcg_header*,int ,int) ;
 int VAR_2 ;
 int FUNC_5 (char*,char*,int *,int *) ;
 scalar_t__ FUNC_6 (scalar_t__*) ;

void
FUNC_7(struct jcg_header *VAR_3, size_t VAR_4, char *VAR_5)
{
 uLong VAR_6;
 uint16_t VAR_7 = 0, VAR_8 = 0;
 void *VAR_9 = (void *)VAR_3 + sizeof(*VAR_3);
 time_t VAR_10;

 if (VAR_2 != -1) {
  VAR_10 = VAR_2;
 } else if ((FUNC_6(&VAR_10) == (time_t)(-1))) {
  FUNC_1(1, "time call failed");
 }

 if (VAR_5 != ((void*)0)) {
  if (FUNC_5(VAR_5, "%hu.%hu", &VAR_7, &VAR_8) != 2) {
   FUNC_1(1, "cannot parse version \"%s\"", VAR_5);
  }
 }

 FUNC_4(VAR_3, 0, sizeof(*VAR_3));
 VAR_3->jh_magic = FUNC_2(VAR_0);
 VAR_3->jh_type = FUNC_2(1);
 VAR_3->jh_time = FUNC_2(VAR_10);
 VAR_3->jh_major = FUNC_3(VAR_7);
 VAR_3->jh_minor = FUNC_3(VAR_8);


 VAR_6 = FUNC_0(0L, VAR_1, 0);
 VAR_6 = FUNC_0(VAR_6, VAR_9, VAR_4);
 VAR_3->jh_dcrc = FUNC_2(VAR_6);


 VAR_6 = FUNC_0(0L, VAR_1, 0);
 VAR_6 = FUNC_0(VAR_6, (void *)VAR_3, sizeof(*VAR_3));
 VAR_3->jh_hcrc = FUNC_2(VAR_6);
}
