
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_buffer {int (* end_io ) (struct dm_buffer*,int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct dm_buffer*,int ) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(unsigned long VAR_1, void *VAR_2)
{
 struct dm_buffer *VAR_3 = VAR_2;

 VAR_3->end_io(VAR_3, FUNC_1(VAR_1 != 0) ? VAR_0 : 0);
}
