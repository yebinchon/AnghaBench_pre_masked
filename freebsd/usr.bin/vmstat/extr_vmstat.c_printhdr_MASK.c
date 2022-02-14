
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned long u_long ;
struct TYPE_2__ {scalar_t__ selected; int unit_number; int * device_name; } ;


 int FUNC_0 (int ,scalar_t__) ;
 scalar_t__ VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 () ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_2 (char*,...) ;

__attribute__((used)) static void
FUNC_3(int VAR_9, u_long VAR_10)
{
 int VAR_11, VAR_12;

 VAR_12 = FUNC_0(VAR_6, VAR_4);
 if (VAR_3)
  FUNC_2(" {T:procs}    {T:memory}    {T:/page%*s}", 19, "");
 else
  FUNC_2("{T:procs}     {T:memory}       {T:/page%*s}", 19, "");
 if (VAR_12 > 1)
  FUNC_2("   {T:/disks %*s}  ", VAR_12 * 4 - 7, "");
 else if (VAR_12 == 1)
  FUNC_2("   {T:disks}");
 FUNC_2(" {T:faults}      ");
 if (VAR_0) {
  for (VAR_11 = 0; VAR_11 <= VAR_9; VAR_11++) {
   if (VAR_10 & (1ul << VAR_11))
    FUNC_2("  {T:/cpu%d}   ", VAR_11);
  }
  FUNC_2("\n");
 } else
  FUNC_2(" {T:cpu}\n");
 if (VAR_3) {
  FUNC_2(" {T:r}  {T:b}  {T:w}  {T:avm}  {T:fre}  {T:flt}  {T:re}"
      "  {T:pi}  {T:po}   {T:fr}   {T:sr} ");
 } else {
  FUNC_2("{T:r} {T:b} {T:w}     {T:avm}     {T:fre}  {T:flt}  "
      "{T:re}  {T:pi}  {T:po}    {T:fr}   {T:sr} ");
 }
 for (VAR_11 = 0; VAR_11 < VAR_5; VAR_11++)
  if ((VAR_1[VAR_11].selected) &&
      (VAR_1[VAR_11].selected <= VAR_4))
   FUNC_2("{T:/%c%c%d} ", VAR_1[VAR_11].device_name[0],
       VAR_1[VAR_11].device_name[1],
       VAR_1[VAR_11].unit_number);
 FUNC_2("  {T:in}   {T:sy}   {T:cs}");
 if (VAR_0) {
  for (VAR_11 = 0; VAR_11 <= VAR_9; VAR_11++) {
   if (VAR_10 & (1ul << VAR_11))
    FUNC_2(" {T:us} {T:sy} {T:id}");
  }
  FUNC_2("\n");
 } else
  FUNC_2(" {T:us} {T:sy} {T:id}\n");
 if (VAR_8 != 0)
  FUNC_1();
 VAR_2 = VAR_7;
}
