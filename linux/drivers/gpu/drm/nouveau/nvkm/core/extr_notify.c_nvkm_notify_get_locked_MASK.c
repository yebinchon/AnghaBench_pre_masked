
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvkm_notify {scalar_t__ block; int index; int types; int event; } ;


 int FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static inline void
FUNC_1(struct nvkm_notify *VAR_0)
{
 if (--VAR_0->block == 0)
  FUNC_0(VAR_0->event, VAR_0->types, VAR_0->index);
}
