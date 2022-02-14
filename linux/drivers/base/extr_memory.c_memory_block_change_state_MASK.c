
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct memory_block {unsigned long state; int online_type; int start_section_nr; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_0 (int ,unsigned long,int ) ;

__attribute__((used)) static int FUNC_1(struct memory_block *VAR_3,
  unsigned long VAR_4, unsigned long VAR_5)
{
 int VAR_6 = 0;

 if (VAR_3->state != VAR_5)
  return -VAR_0;

 if (VAR_4 == VAR_2)
  VAR_3->state = VAR_1;

 VAR_6 = FUNC_0(VAR_3->start_section_nr, VAR_4,
    VAR_3->online_type);

 VAR_3->state = VAR_6 ? VAR_5 : VAR_4;

 return VAR_6;
}
