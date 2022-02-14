
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sighand {scalar_t__ altstack; scalar_t__ altstack_size; } ;
typedef scalar_t__ dword_t ;



__attribute__((used)) static bool FUNC_0(dword_t VAR_0, struct sighand *VAR_1) {
    return VAR_0 > VAR_1->altstack && VAR_0 <= VAR_1->altstack + VAR_1->altstack_size;
}
