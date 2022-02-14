
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hws_trailer_entry {int dummy; } ;
struct aux_buffer {unsigned long* sdb_index; } ;


 unsigned long FUNC_0 (struct aux_buffer*,unsigned long) ;
 scalar_t__ FUNC_1 (unsigned long) ;

__attribute__((used)) static struct hws_trailer_entry *FUNC_2(struct aux_buffer *VAR_0,
       unsigned long VAR_1)
{
 unsigned long VAR_2;

 VAR_1 = FUNC_0(VAR_0, VAR_1);
 VAR_2 = VAR_0->sdb_index[VAR_1];
 return (struct hws_trailer_entry *)FUNC_1(VAR_2);
}
