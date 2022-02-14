
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
struct st_fcgi_record_header_t {scalar_t__ reserved; scalar_t__ paddingLength; int contentLength; int requestId; int type; int version; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;

__attribute__((used)) static void FUNC_1(void *VAR_1, uint8_t VAR_2, uint16_t VAR_3, uint16_t VAR_4)
{
    struct st_fcgi_record_header_t *VAR_5 = VAR_1;
    VAR_5->version = VAR_0;
    VAR_5->type = VAR_2;
    FUNC_0(&VAR_5->requestId, VAR_3);
    FUNC_0(&VAR_5->contentLength, VAR_4);
    VAR_5->paddingLength = 0;
    VAR_5->reserved = 0;
}
