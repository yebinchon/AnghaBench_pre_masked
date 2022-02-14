
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* priv_data; } ;
typedef TYPE_1__ URLContext ;
struct TYPE_5__ {int inner; } ;
typedef TYPE_2__ Context ;


 int FUNC_0 (int ,unsigned char*,int) ;

__attribute__((used)) static int FUNC_1(URLContext *VAR_0, unsigned char *VAR_1, int VAR_2)
{
    Context *VAR_3 = VAR_0->priv_data;

    return FUNC_0(VAR_3->inner, VAR_1, VAR_2);
}
