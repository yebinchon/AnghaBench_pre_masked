
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct st_fcgi_record_header_t {void* contentLength; void* requestId; } ;


 void* FUNC_0 (void*) ;
 int FUNC_1 (struct st_fcgi_record_header_t*,void const*,int) ;

__attribute__((used)) static void FUNC_2(struct st_fcgi_record_header_t *VAR_0, const void *VAR_1)
{
    FUNC_1(VAR_0, VAR_1, sizeof(*VAR_0));
    VAR_0->requestId = FUNC_0(VAR_0->requestId);
    VAR_0->contentLength = FUNC_0(VAR_0->contentLength);
}
