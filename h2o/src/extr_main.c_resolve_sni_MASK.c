
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {size_t size; TYPE_1__* entries; } ;
struct listener_ssl_config_t {TYPE_2__ hostnames; } ;
struct TYPE_6__ {size_t size; struct listener_ssl_config_t** entries; } ;
struct listener_config_t {TYPE_3__ ssl; } ;
struct TYPE_4__ {char* base; size_t len; } ;


 scalar_t__ FUNC_0 (char const*,size_t,char*,size_t) ;

__attribute__((used)) static struct listener_ssl_config_t *FUNC_1(struct listener_config_t *VAR_0, const char *VAR_1, size_t VAR_2)
{
    size_t VAR_3, VAR_4;

    for (VAR_3 = 0; VAR_3 != VAR_0->ssl.size; ++VAR_3) {
        struct listener_ssl_config_t *VAR_5 = VAR_0->ssl.entries[VAR_3];
        for (VAR_4 = 0; VAR_4 != VAR_5->hostnames.size; ++VAR_4) {
            if (VAR_5->hostnames.entries[VAR_4].base[0] == '*') {

                size_t VAR_6 = VAR_5->hostnames.entries[VAR_4].len - 1;
                if (!(VAR_6 < VAR_2 && FUNC_0(VAR_1 + VAR_2 - VAR_6, VAR_6, VAR_5->hostnames.entries[VAR_4].base + 1,
                                                       VAR_5->hostnames.entries[VAR_4].len - 1)))
                    continue;
            } else {
                if (!FUNC_0(VAR_1, VAR_2, VAR_5->hostnames.entries[VAR_4].base, VAR_5->hostnames.entries[VAR_4].len))
                    continue;
            }

            return VAR_0->ssl.entries[VAR_3];
        }
    }
    return VAR_0->ssl.entries[0];
}
