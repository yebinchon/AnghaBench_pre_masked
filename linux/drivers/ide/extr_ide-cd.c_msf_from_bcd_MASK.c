
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct atapi_msf {void* frame; void* second; void* minute; } ;


 void* FUNC_0 (void*) ;

__attribute__((used)) static void FUNC_1(struct atapi_msf *VAR_0)
{
 VAR_0->minute = FUNC_0(VAR_0->minute);
 VAR_0->second = FUNC_0(VAR_0->second);
 VAR_0->frame = FUNC_0(VAR_0->frame);
}
