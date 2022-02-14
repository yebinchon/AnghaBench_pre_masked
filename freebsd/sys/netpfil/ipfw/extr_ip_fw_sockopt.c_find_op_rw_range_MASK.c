
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
struct opcode_obj_rewrite {scalar_t__ opcode; } ;
typedef int h ;


 scalar_t__ FUNC_0 (struct opcode_obj_rewrite*,struct opcode_obj_rewrite*,int,int,int ) ;
 int VAR_0 ;
 struct opcode_obj_rewrite* VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct opcode_obj_rewrite*,int ,int) ;

__attribute__((used)) static int
FUNC_2(uint16_t VAR_3, struct opcode_obj_rewrite **VAR_4,
    struct opcode_obj_rewrite **VAR_5)
{
 struct opcode_obj_rewrite *VAR_6, *VAR_7, *VAR_8, VAR_9, *VAR_10;

 FUNC_1(&VAR_9, 0, sizeof(VAR_9));
 VAR_9.opcode = VAR_3;

 VAR_10 = (struct opcode_obj_rewrite *)FUNC_0(&VAR_9, VAR_1,
     VAR_2, sizeof(VAR_9), VAR_0);
 if (VAR_10 == ((void*)0))
  return (1);


 VAR_7 = VAR_10;
 for ( ; VAR_7 > VAR_1 && (VAR_7 - 1)->opcode == VAR_3; VAR_7--)
  ;


 VAR_8 = VAR_10;
 VAR_6 = VAR_1 + VAR_2;
 for ( ; (VAR_8 + 1) < VAR_6 && (VAR_8 + 1)->opcode == VAR_3; VAR_8++)
  ;

 *VAR_4 = VAR_7;
 *VAR_5 = VAR_8;

 return (0);
}
