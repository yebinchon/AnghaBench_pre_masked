
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ewah_bitmap {scalar_t__ buffer_size; scalar_t__ buffer; scalar_t__ rlw; } ;
typedef int eword_t ;


 int FUNC_0 (struct ewah_bitmap*,int ) ;

__attribute__((used)) static void FUNC_1(struct ewah_bitmap *VAR_0, eword_t VAR_1)
{
 FUNC_0(VAR_0, VAR_1);
 VAR_0->rlw = VAR_0->buffer + VAR_0->buffer_size - 1;
}
