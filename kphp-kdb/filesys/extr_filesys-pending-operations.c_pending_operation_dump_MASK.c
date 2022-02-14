
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pending_operation {int newpath; int oldpath; int type; } ;


 int FUNC_0 (char*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1 (struct pending_operation *VAR_0) {
  FUNC_0 ("type:%d, oldpath: %s, newpath: %s\n", VAR_0->type, VAR_0->oldpath, VAR_0->newpath);
}
