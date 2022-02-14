
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kernel_param {scalar_t__ arg; } ;


 scalar_t__ FUNC_0 () ;
 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 int FUNC_1 (char const*,int ,unsigned long*) ;
 int FUNC_2 (char*,...) ;

__attribute__((used)) static int FUNC_3(const char *VAR_5, const struct kernel_param *VAR_6)
{
 int VAR_7 = 0;
 unsigned long *VAR_8 = (unsigned long *)VAR_6->arg,
  VAR_9 = *VAR_8, VAR_10, VAR_11,
  VAR_12 = ((VAR_4 << VAR_3) |
         VAR_4);

 VAR_7 = FUNC_1(VAR_5, 0, &VAR_10);
 if (VAR_7) {
  FUNC_2("Invalid module parameter value for 'cap_mask'\n");
  goto done;
 }

 VAR_11 = VAR_10 ^ (VAR_9 & ~VAR_0);


 if (FUNC_0() && (VAR_11 & ~VAR_12)) {
  FUNC_2("Ignoring non-writable capability bits %#lx\n",
   VAR_11 & ~VAR_12);
  VAR_11 &= VAR_12;
 }


 VAR_11 &= ~VAR_2;

 VAR_9 &= ~VAR_11;

 VAR_9 |= (VAR_10 & VAR_11);

 VAR_11 = (VAR_9 & (VAR_1 << VAR_3)) ^
  ((VAR_9 & VAR_1) << VAR_3);
 VAR_9 &= ~VAR_11;

 *VAR_8 = VAR_9;
done:
 return VAR_7;
}
