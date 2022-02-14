
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct meson_drm {scalar_t__ io_base; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int const VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (unsigned int const,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct meson_drm *VAR_3,
       const unsigned int *VAR_4,
       bool VAR_5)
{
 int VAR_6;

 FUNC_1(VAR_5 ? VAR_2 : 0,
   VAR_3->io_base + FUNC_0(VAR_1));
 for (VAR_6 = 0; VAR_6 < 33; VAR_6++)
  FUNC_1(VAR_4[VAR_6],
    VAR_3->io_base + FUNC_0(VAR_0));
}
