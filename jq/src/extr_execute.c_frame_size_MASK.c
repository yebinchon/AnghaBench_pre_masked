
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union frame_entry {int dummy; } frame_entry ;
struct frame {int dummy; } ;
struct bytecode {int nclosures; int nlocals; } ;



__attribute__((used)) static int FUNC_0(struct bytecode* VAR_0) {
  return sizeof(struct frame) + sizeof(union frame_entry) * (VAR_0->nclosures + VAR_0->nlocals);
}
