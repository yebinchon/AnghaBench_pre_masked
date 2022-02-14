
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct demo {float depthStencil; float depthIncrement; scalar_t__ curFrame; scalar_t__ frameCount; int window; int device; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct demo*) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct demo *VAR_2) {
    while (!FUNC_3(VAR_2->window)) {
        FUNC_1();

        FUNC_0(VAR_2);

        if (VAR_2->depthStencil > 0.99f)
            VAR_2->depthIncrement = -0.001f;
        if (VAR_2->depthStencil < 0.8f)
            VAR_2->depthIncrement = 0.001f;

        VAR_2->depthStencil += VAR_2->depthIncrement;


        FUNC_4(VAR_2->device);
        VAR_2->curFrame++;
        if (VAR_2->frameCount != VAR_1 && VAR_2->curFrame == VAR_2->frameCount)
            FUNC_2(VAR_2->window, VAR_0);
    }
}
