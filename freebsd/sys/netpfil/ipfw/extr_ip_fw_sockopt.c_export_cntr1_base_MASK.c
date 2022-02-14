
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {scalar_t__ tv_sec; } ;
struct ip_fw_bcounter {int size; scalar_t__ timestamp; void* bcnt; void* pcnt; } ;
struct ip_fw {scalar_t__ timestamp; int * cntr; } ;


 void* FUNC_0 (int *) ;
 int FUNC_1 (struct timeval*) ;

__attribute__((used)) static void
FUNC_2(struct ip_fw *VAR_0, struct ip_fw_bcounter *VAR_1)
{
 struct timeval VAR_2;

 VAR_1->size = sizeof(*VAR_1);

 if (VAR_0->cntr != ((void*)0)) {
  VAR_1->pcnt = FUNC_0(VAR_0->cntr);
  VAR_1->bcnt = FUNC_0(VAR_0->cntr + 1);
  VAR_1->timestamp = VAR_0->timestamp;
 }
 if (VAR_1->timestamp > 0) {
  FUNC_1(&VAR_2);
  VAR_1->timestamp += VAR_2.tv_sec;
 }
}
