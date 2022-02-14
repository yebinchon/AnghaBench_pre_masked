
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipoctal_channel {scalar_t__ nb_bytes; scalar_t__ pointer_write; scalar_t__ pointer_read; int stats; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct ipoctal_channel *VAR_0)
{
 FUNC_0(&VAR_0->stats);
 VAR_0->pointer_read = 0;
 VAR_0->pointer_write = 0;
 VAR_0->nb_bytes = 0;
}
