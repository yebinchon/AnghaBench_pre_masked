
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct napi_struct {scalar_t__ dev; } ;
struct TYPE_2__ {scalar_t__ vlddes; } ;


 int FUNC_0 (scalar_t__*) ;
 int FUNC_1 (int ,int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_2 (int) ;
 scalar_t__* VAR_2 ;
 int FUNC_3 (struct napi_struct*) ;
 int FUNC_4 (scalar_t__) ;
 unsigned int FUNC_5 (int,int) ;

__attribute__((used)) static int FUNC_6(struct napi_struct *VAR_3, int VAR_4)
{
    int VAR_5;
    unsigned int VAR_6;

    for ( VAR_5 = 0; VAR_5 < FUNC_0(VAR_2) && VAR_2[VAR_5] != VAR_3->dev; VAR_5++ );

    VAR_6 = FUNC_5(VAR_5, VAR_4);


    if ( !FUNC_4(VAR_3->dev) ) {
        FUNC_3(VAR_3);
        return VAR_6;
    }


    if ( FUNC_2(VAR_5)->vlddes == 0 ) {

        FUNC_1(0, 1 << VAR_5, VAR_1);

        if ( FUNC_2(VAR_5)->vlddes == 0 ) {
            FUNC_3(VAR_3);
            FUNC_1(0, 1 << VAR_5, VAR_0);
            return VAR_6;
        }
    }


    return VAR_6;
}
