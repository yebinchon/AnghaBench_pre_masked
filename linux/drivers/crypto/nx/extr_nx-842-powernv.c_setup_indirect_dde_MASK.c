
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct data_descriptor_entry {unsigned int count; int address; int length; scalar_t__ index; scalar_t__ flags; } ;


 int FUNC_0 (unsigned int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct data_descriptor_entry*) ;

__attribute__((used)) static void FUNC_3(struct data_descriptor_entry *VAR_0,
          struct data_descriptor_entry *VAR_1,
          unsigned int VAR_2, unsigned int VAR_3)
{
 VAR_0->flags = 0;
 VAR_0->count = VAR_2;
 VAR_0->index = 0;
 VAR_0->length = FUNC_0(VAR_3);
 VAR_0->address = FUNC_1(FUNC_2(VAR_1));
}
