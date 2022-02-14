
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
struct st_fcgi_begin_request_body_t {int reserved; int flags; int role; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (void*,int ,int ,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static void FUNC_3(void *VAR_3, uint16_t VAR_4, uint16_t VAR_5, uint8_t VAR_6)
{
    FUNC_0(VAR_3, VAR_0, VAR_4, VAR_1);
    struct st_fcgi_begin_request_body_t *VAR_7 = (void *)((char *)VAR_3 + VAR_2);
    FUNC_1(&VAR_7->role, VAR_5);
    VAR_7->flags = VAR_6;
    FUNC_2(VAR_7->reserved, 0, sizeof(VAR_7->reserved));
}
