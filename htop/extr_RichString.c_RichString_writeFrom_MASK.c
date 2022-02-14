
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* chptr; } ;
typedef TYPE_1__ RichString ;


 int FUNC_0 (TYPE_1__*,int) ;

__attribute__((used)) static inline void FUNC_1(RichString* VAR_0, int VAR_1, const char* VAR_2, int VAR_3, int VAR_4) {
   int VAR_5 = VAR_3 + VAR_4;
   FUNC_0(VAR_0, VAR_5);
   for (int VAR_6 = VAR_3, VAR_7 = 0; VAR_6 < VAR_5; VAR_6++, VAR_7++)
      VAR_0->chptr[VAR_6] = (VAR_2[VAR_7] >= 32 ? VAR_2[VAR_7] : '?') | VAR_1;
   VAR_0->chptr[VAR_5] = 0;
}
