
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct line_number_mapping {int source_start; int destination_length; int source_length; int destination_start; } ;



__attribute__((used)) static int FUNC_0(int VAR_0,
 const struct line_number_mapping *VAR_1)
{
 return ((VAR_0 - VAR_1->source_start) * 2 + 1) *
        VAR_1->destination_length /
        (VAR_1->source_length * 2) +
        VAR_1->destination_start;
}
