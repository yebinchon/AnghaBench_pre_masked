
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vector_private {scalar_t__ rx_header_size; scalar_t__ header_size; int * verify_header; int * form_header; } ;



__attribute__((used)) static int FUNC_0(struct vector_private *VAR_0)
{
 VAR_0->form_header = ((void*)0);
 VAR_0->verify_header = ((void*)0);
 VAR_0->header_size = 0;
 VAR_0->rx_header_size = 0;
 return 0;
}
