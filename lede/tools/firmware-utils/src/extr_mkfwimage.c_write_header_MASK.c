
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int32_t ;
struct TYPE_3__ {long pad; int crc; int version; int magic; } ;
typedef TYPE_1__ header_t ;


 int VAR_0 ;
 int FUNC_0 (long,unsigned char*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char const*,int ) ;
 int FUNC_3 (TYPE_1__*,int ,int) ;
 int FUNC_4 (int ,char const*,int) ;

__attribute__((used)) static void FUNC_5(void* VAR_1, const char *VAR_2, const char* VAR_3)
{
 header_t* VAR_4 = VAR_1;
 FUNC_3(VAR_4, 0, sizeof(header_t));

 FUNC_2(VAR_4->magic, VAR_2, VAR_0);
 FUNC_4(VAR_4->version, VAR_3, sizeof(VAR_4->version));
 VAR_4->crc = FUNC_1(FUNC_0(0L, (unsigned char *)VAR_4,
    sizeof(header_t) - 2 * sizeof(u_int32_t)));
 VAR_4->pad = 0L;
}
