
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int width; int x; int label; } ;
typedef TYPE_1__ button_t ;
struct TYPE_5__ {scalar_t__ height; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,int ,int,int,int,scalar_t__) ;
 int FUNC_1 (int ,int *,int ,int ,int,int,int) ;
 TYPE_2__ VAR_7 ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(button_t *VAR_8, int VAR_9) {
    int VAR_10 = FUNC_2(VAR_8->label);
    VAR_8->width = VAR_10 + 2 * VAR_1 + 2 * VAR_0;
    VAR_8->x = VAR_9 - VAR_8->width;


    FUNC_0(&VAR_3, VAR_4,
                        VAR_9 - VAR_8->width,
                        VAR_2 - VAR_1 - VAR_0,
                        VAR_8->width,
                        VAR_7.height + 2 * VAR_1 + 2 * VAR_0);

    FUNC_0(&VAR_3, VAR_5,
                        VAR_9 - VAR_8->width + VAR_0,
                        VAR_2 - VAR_1,
                        VAR_10 + 2 * VAR_1,
                        VAR_7.height + 2 * VAR_1);

    FUNC_1(VAR_8->label, &VAR_3, VAR_6, VAR_5,
                   VAR_9 - VAR_8->width + VAR_0 + VAR_1,
                   VAR_2,
                   200);
    return VAR_8->width;
}
